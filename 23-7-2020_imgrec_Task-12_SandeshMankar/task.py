import cv2
import  numpy as np

img1=cv2.imread(r"C:\Users\DELL\Downloads\text.jpg")
#img2=cv2.imread(r"C:\Users\DELL\Downloads\text.jpg",0)
img3=cv2.imread(r"C:\Users\DELL\Downloads\text.jpg")
greyscale=cv2.cvtColor(img1,cv2.COLOR_RGB2GRAY)
hsv=cv2.cvtColor(img3,cv2.COLOR_RGB2HSV)
img4=cv2.resize(img1,(400,400))


res,thresh1=cv2.threshold(greyscale,155,255,cv2.THRESH_BINARY)
res,thresh2=cv2.threshold(greyscale,135,255,cv2.THRESH_BINARY_INV)
gaussian=cv2.adaptiveThreshold(greyscale,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,133,1)
mean=cv2.adaptiveThreshold(greyscale,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,135,1)
#cv2.imshow("GREYSCALE",greyscale)

cv2.imshow("HSV",hsv)
cv2.imshow("ORIGINAL",img1)
cv2.imshow("RESIZE",img4)
cv2.imshow("THRESH1",thresh1)
cv2.imshow("THRESH2",thresh2)
cv2.imshow("GAUSSIAN",gaussian)
cv2.imshow("MEAN",mean)
cv2.waitKey(0)
cv2.destroyAllWindows()