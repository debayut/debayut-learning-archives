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

#   this draws the character using the sprites
    def draw(self, win):
        if self.walkCount + 1 >= 27:
            self.walkCount = 0

        if self.left:
            win.blit(walkLeft[self.walkCount//3], (self.x,self.y))
            self.walkCount += 1
        elif self.right:
            win.blit(walkRight[self.walkCount//3], (self.x,self.y))
            self.walkCount +=1
        else:
            win.blit(char, (self.x,self.y))


#this one draws the entire game window
def redrawGameWindow():
    win.blit(bg, (0,0))
    man.draw(win)
    
    pygame.display.update()


#mainloop
man = player(200, 410, 64,64)
run = True
while run:
    clock.tick(27)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False

    keys = pygame.key.get_pressed()

    if keys[pygame.K_LEFT] and man.x > man.vel:
        man.x -= man.vel
        man.left = True
        man.right = False
    elif keys[pygame.K_RIGHT] and man.x < 500 - man.width - man.vel:
        man.x += man.vel
        man.right = True
        man.left = False
    else:
        man.right = False
        man.left = False
        man.walkCount = 0
        
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