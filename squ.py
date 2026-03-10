# METHOD - 1

# side=int(input("enter the side of square : "))
# for i in range(1,side+1):
#     if(i==1 or i==side):
#         for j in range(0,side):
#             print("* ",end="")
#     else :
#         for k in range(1,side+1):
#             if(k==1 or k==side):
#                 print("* ",end="")
#             else:
#                 print("  ",end="")
#     print("\n")


# METHOD - 2

# side=int(input("enter the side of square : "))
# for i in range(1,side+1):
#     for j in range(1,side+1):
#         if(i==1 or j==1 or i==side or j==side):
#             print("* ",end="")
#         else:
#             print("  ",end="")
#     print("\n")