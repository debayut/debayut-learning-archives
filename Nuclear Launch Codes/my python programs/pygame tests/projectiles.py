import pygame
import os
pygame.init()

win = pygame.display.set_mode((500,480))

pygame.display.set_caption("welp")


script_dir = os.path.dirname(os.path.abspath(__file__))
def load_img(name):
  return pygame.image.load(os.path.join(script_dir, name))

walkRight = [load_img('R1.png'), load_img('R2.png'), load_img('R3.png'), load_img('R4.png'), load_img('R5.png'), load_img('R6.png'), load_img('R7.png'), load_img('R8.png'), load_img('R9.png')]
walkLeft = [load_img('L1.png'), load_img('L2.png'), load_img('L3.png'), load_img('L4.png'), load_img('L5.png'), load_img('L6.png'), load_img('L7.png'), load_img('L8.png'), load_img('L9.png')]
bg = load_img('bg.jpg')
char = load_img('standing.png')


clock = pygame.time.Clock()


class player(object):
    def __init__(self,x,y,width,height):
        self.x = x
        self.y = y
        self.width = width
        self.height = height
        self.vel = 7
        self.isJump = False
        self.left = False
        self.right = False
        self.walkCount = 0
        self.jumpCount = 10
        self.standing =  True

#   this draws the character using the sprites
    def draw(self, win):
        if self.walkCount + 1 >= 27:
            self.walkCount = 0

        if not (self.standing):
            if self.left:
                win.blit(walkLeft[self.walkCount//3], (self.x,self.y))
                self.walkCount += 1
            elif self.right:
                win.blit(walkRight[self.walkCount//3], (self.x,self.y))
                self.walkCount +=1
        else:
            if self.right:
                win.blit(walkRight[0], (self.x, self.y))
            else:
                win.blit(walkLeft[0], (self.x, self.y)) 


class projectile(object):
    def __init__ (self,x,y,radius,color,facing):
        self.x = x
        self.y = y
        self.radius = radius
        self.color = color
        self.facing = facing
        self.vel = 8 * facing

    def draw(self,win):
        pygame.draw.circle(win, self.color, (self.x,self.y), self.radius)
 




#this one draws the entire game window
def redrawGameWindow():
    win.blit(bg, (0,0))
    man.draw(win)

    for bullet in bullets:
         bullet.draw(win)
    
    pygame.display.update()


#mainloop
man = player(200, 410, 64,64)
bullets = []
run = True
while run:
    clock.tick(54)

    for bullet in bullets:
        if bullet.x < 500 and bullet.x > 0:
            bullet.x += bullet.vel
        else: 
            bullets.pop(bullets.index(bullet))
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False

    keys = pygame.key.get_pressed()

    if keys[pygame.K_f]:
        if man.left:
            facing = -1
        else:
            facing = 1
        
        if len(bullets) < 5:
            bullets.append(projectile(round(man.x + man.width //2), round(man.y + man.height//2), 6, (0,0,0), facing))

    if keys[pygame.K_LEFT] and man.x > man.vel:
        man.x -= man.vel
        man.left = True
        man.right = False
        man.standing = False
    elif keys[pygame.K_RIGHT] and man.x < 500 - man.width - man.vel:
        man.x += man.vel
        man.right = True
        man.left = False
        man.standing = False
    else:
        man.walkCount = 0
        man.standing = True
        
    if not(man.isJump):
        if keys[pygame.K_SPACE]:
            man.isJump = True
            man.right = False
            man.left = False
            man.walkCount = 0
    else:
        if man.jumpCount >= -10:
            neg = 1
            if man.jumpCount < 0:
                neg = -1
            man.y -= (man.jumpCount ** 2) * 0.25 * neg
            man.jumpCount -= 1
        else:
            man.isJump = False
            man.jumpCount = 10
            
    redrawGameWindow()

pygame.quit()