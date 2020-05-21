#-*- coding:utf-8 -*-
#------------------------------------------------------------------------------
# Name:        2017029407_pa1
# Purpose:
#
# Author:      kse98
#
# Created:     05-05-2017
# Copyright:   (c) kse98 2017
# Licence:     <your licence>
#-------------------------------------------------------------------------------

# 변수 초기화 및 그리드 형성
moveCount=0 # 이동 횟수를 세기 위한 변수
CheckCount=0 # 체크 포인트를 모두 통과했는지 확인하기 위한 변수
presentX=3 # 'S'의 행을 나타내기 위한 변수, 다음 위치의 행을 나타내기 위해서도 필요
presentY=6 # 'S'의 열을 나타내기 위한 변수, 다음 위치의 열을 나타내기 위해서도 필요
directionList=[] # 이동 가능한 방향을 나타내기 위한 리스트
Greed=[[0 for col in range(8)]for row in range (6)] # 이중 리스트 생성
Greed[0][0]='#'
Greed[0][1]='#'
Greed[0][2]='#'
Greed[0][3]='#'
Greed[0][4]='#'
Greed[0][5]='#'
Greed[0][6]='#'
Greed[0][7]='#'
Greed[1][0]='#'
Greed[1][1]='@'
Greed[1][2]='.'
Greed[1][3]='.'
Greed[1][4]='.'
Greed[1][5]='.'
Greed[1][6]='G'
Greed[1][7]='#'
Greed[2][0]='#'
Greed[2][1]='#'
Greed[2][2]='.'
Greed[2][3]='#'
Greed[2][4]='#'
Greed[2][5]='@'
Greed[2][6]='#'
Greed[2][7]='#'
Greed[3][0]='#'
Greed[3][1]='.'
Greed[3][2]='.'
Greed[3][3]='@'
Greed[3][4]='.'
Greed[3][5]='.'
Greed[3][6]='S'
Greed[3][7]='#'
Greed[4][0]='#'
Greed[4][1]='@'
Greed[4][2]='.'
Greed[4][3]='.'
Greed[4][4]='.'
Greed[4][5]='.'
Greed[4][6]='.'
Greed[4][7]='#'
Greed[5][0]='#'
Greed[5][1]='#'
Greed[5][2]='#'
Greed[5][3]='#'
Greed[5][4]='#'
Greed[5][5]='#'
Greed[5][6]='#'
Greed[5][7]='#'

# 함수 정의
def GreedPrint(greed) : # 미로를 출력하는 함수
    for row in range (6) :
        for col in range (8) :
            if col==7 :
                print greed[row][col]+'\n' # 행이 넘어갔을 때 다음 줄에 출력하도록함
            else :
                print greed[row][col], # 열끼리는 붙어있도록 출력

def CheckDirection(greed,x,y) : # 이동 가능한 방향을 찾는 함수, 인자로 그리드와 현재 위치를 받음
    DirectionList=[] # 기호 '#'이 없는 곳으로 이동 가능, 각각의 방향은 리스트 상에서 행과 열을 고려해보면 알 수있음
    if greed[x-1][y]!='#' :
        DirectionList.append('N')
    if greed[x][y+1]!='#' :
        DirectionList.append('E')
    if greed[x+1][y]!='#' :
        DirectionList.append('S')
    if greed[x][y-1]!='#' :
        DirectionList.append('W')
    return DirectionList # 이동 가능한 방향이 담긴 리스트를 return

def InputDirection(DirectionList) : # 이동하고자 하는 방향을 입력받는 함수, 인자로 이동 가능한 방향이 담긴 리스트를 받음
    print 'Input next move : '+str(directionList)+'?' # 이동 가능 방향 리스트 출력
    Direction=raw_input()
    Direction=Direction.upper() # 방향 소문자 입력해도 이동 가능
    while not Direction in DirectionList : # 이동 가능 리스트에 입력 방향이 없는 경우 다시 입력 받음
        print "Can't move!"
        print 'Input next move : '+str(DirectionList)+'?'
        Direction=raw_input()
        Direction=Direction.upper()
    return Direction

# 함수 정의 완료/ 본함수 시작
for moveCount in range (21) : # 제한 횟수동안 반복, 반복횟수가 20이 아닌 것은 마지막 실패 결과를 나타내기 위함
    order=['first','second','third','fourth'] # 몇 번째 체크포인트를 지났는지 나타내기 위한 리스트
    if moveCount==20 and Greed[presentX][presentY]!='G': # 20회 시도 후 도착하지 못한 경우
        print str(moveCount)+'> You Lose'
        Greed[presentX][presentY]='S' # 도착한 위치를 현재 위치로 나타냄
        GreedPrint(Greed)
        directionList=CheckDirection(Greed,presentX,presentY)
        print 'Input next move : '+str(directionList)+'?'
        break
    elif CheckCount==4 and Greed[presentX][presentY]=='G' : # 20회 시도 안에 체크포인트를 모두 지나 도착한 경우
        print str(moveCount)+'> You win!'
        Greed[presentX][presentY]='S'
        GreedPrint(Greed)
        directionList=CheckDirection(Greed,presentX,presentY)
        print 'Input next move : '+str(directionList)+'?'
        break
    elif CheckCount!=4 and Greed[presentX][presentY]=='G' : # 20회 시도 안에 체크포인트를 모두 지나지 못하고 도착한 경우
        print str(moveCount)+'> You Lose'
        Greed[presentX][presentY]='S'
        GreedPrint(Greed)
        directionList=CheckDirection(Greed,presentX,presentY)
        print 'Input next move : '+str(directionList)+'?'
        break
    elif Greed[presentX][presentY]=='@' : # 'S'가 체크 포인트로 이동하는 경우
        print str(moveCount)+'> You have arrived the '+order[CheckCount]+' checkpoint.' # 몇 번째 체크포인트인지 출력
        Greed[presentX][presentY]='S'
        GreedPrint(Greed)
        Greed[presentX][presentY]='.' # 다음 출력 전에 현재 위치에 '.'을 넣어 놓음
        directionList=CheckDirection(Greed,presentX,presentY)
        direction=InputDirection(directionList) # 이동할 방향 입력 받음
        if direction=='N' : # 각각의 경우에 맞게 좌표 이동
            presentX=presentX-1
        elif direction=='E' :
            presentY=presentY+1
        elif direction=='S' :
            presentX=presentX+1
        elif direction=='W' :
            presentY=presentY-1
        CheckCount=CheckCount+1 # 체크 포인트를 지났으므로 변수 1 증가
        moveCount=moveCount+1 # 움직인 횟수 1 증가
    else : # 'S'에서 처음 시작하는 것과 'S'가 '.'으로 이동하는 경우
        print str(moveCount)+'>'
        Greed[presentX][presentY]='S'
        GreedPrint(Greed)
        Greed[presentX][presentY]='.'
        directionList=CheckDirection(Greed,presentX,presentY)
        direction=InputDirection(directionList)
        if direction=='N' :
            presentX=presentX-1
        elif direction=='E' :
            presentY=presentY+1
        elif direction=='S' :
            presentX=presentX+1
        elif direction=='W' :
            presentY=presentY-1
        moveCount=moveCount+1 # 움직인 횟수 1 증가
