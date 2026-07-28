import pygame 
import os

pygame.init()


screenwidth,screenheight = pygame.display.Info().current_w,pygame.display.Info().current_h
window = pygame.display.set_mode((screenwidth,screenheight),pygame.RESIZABLE)
pygame.display.set_caption("welp")


script_dir = os.path.dirname(os.path.abspath(__file__))
def load_img(name):
  return pygame.image.load(os.path.join(script_dir, name))

walkRight = [load_img('R1.png'), load_img('R2.png'), load_img('R3.png'), load_img('R4.png'), load_img('R5.png'), load_img('R6.png'), load_img('R7.png'), load_img('R8.png'), load_img('R9.png')]
walkLeft = [load_img('L1.png'), load_img('L2.png'), load_img('L3.png'), load_img('L4.png'), load_img('L5.png'), load_img('L6.png'), load_img('L7.png'), load_img('L8.png'), load_img('L9.png')]
bg = load_img('bg.jpg')
char = load_img('standing.png')


x,y,width,height,vel = 50,400,64,64,6
isJump=False
jumpCount=10
left = False
right = False
walkCount = 0

clock = pygame.time.Clock()

def redrawGameWindow():
    global walkCount
    window.blit(bg, (0,0))

    if walkCount + 1 >= 27:
        walkCount = 0

    if left:
        window.blit(walkLeft[walkCount//3], (x,y))
        walkCount += 1
    elif right:
        window.blit(walkRight[walkCount//3], (x,y))
        walkCount += 1
    else:
        window.blit(char, (x,y)) 
    pygame.display.update()



# mainloop 
run = True
while run:
    clock.tick(54)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False

    keys = pygame.key.get_pressed()

    if keys[pygame.K_a] and x>0:
        x -= vel
        left = True
        right = False
    elif keys[pygame.K_d] and x<screenwidth-width:
        x += vel
        left = False
        right = True
    else:
        left = False
        right = False
        walkCount = 0

    if not(isJump):
        if keys[pygame.K_SPACE]:
                isJump=True
                right = False
                left = False
                walkCount = 0
    else:
        if jumpCount >= -10:
              y -= (jumpCount ** 2) * 0.35 * (1 if jumpCount > 0 else -1)
              jumpCount -= 1
        else:
            jumpCount = 10
            isJump = False 

    redrawGameWindow()

pygame.quit()