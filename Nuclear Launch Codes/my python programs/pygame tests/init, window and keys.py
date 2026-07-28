import pygame 

pygame.init()

window = pygame.display.set_mode((500,500),pygame.RESIZABLE)
pygame.display.set_caption("welp")

x,y,width,height,vel = 50,50,40,60,10

run = True
while run:
    pygame.time.delay(16)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False

    keys = pygame.key.get_pressed()

    if keys[pygame.K_LEFT]:
        x -= vel
    if keys[pygame.K_RIGHT]:
        x += vel
    if keys[pygame.K_UP]:
        y -= vel
    if keys[pygame.K_DOWN]:
        y += vel
    
    

    window.fill((0,0,0))

    pygame.draw.rect(window, (255,0,0), (x,y,width,height))
    pygame.display.update()


pygame.quit()