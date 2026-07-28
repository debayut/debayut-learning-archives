import pygame 

pygame.init()

screenwidth,screenheight = pygame.display.Info().current_w,pygame.display.Info().current_h
window = pygame.display.set_mode((screenwidth,screenheight),pygame.RESIZABLE)
pygame.display.set_caption("welp")


x,y,width,height,vel = 50,50,40,60,10

isJump=False
jumpCount=10

run = True
while run:
    pygame.time.delay(10)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False

    keys = pygame.key.get_pressed()

    if keys[pygame.K_a] and x>0:
        x -= vel
    if keys[pygame.K_d] and x<screenwidth-width:
        x += vel
    if not(isJump):
        if keys[pygame.K_w] and y>0:
                y -= vel
        if keys[pygame.K_s] and y<screenheight-height:
                y += vel
        if keys[pygame.K_SPACE]:
                isJump=True
    else:
        if jumpCount >= -10:
              y -= (jumpCount ** 2) * 0.5 * (1 if jumpCount > 0 else -1)
              jumpCount -= 1
        else:
            jumpCount = 10
            isJump = False

    window.fill((0,0,0))

    pygame.draw.rect(window, (255,0,0), (x,y,width,height))
    pygame.display.update()


pygame.quit()