times = int(input())
for time in range(times):
    x1,y1=input().split()
    r1=int(input())
    x2, y2 = input().split()
    r2=pow((pow((int(x1)-int(x2)),2)+pow((int(y1)-int(y2)),2)),.5)
    if r1>=r2:
        print("The point is inside the circle")
    else:
        print("The point is outside of the circle")
