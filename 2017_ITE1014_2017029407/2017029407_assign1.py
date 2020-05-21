#-------------------------------------------------------------------------------
# Name:        2017029407_assign1
# Purpose:
#
# Author:      kse98
#
# Created:     16-03-2017
# Copyright:   (c) kse98 2017
# Licence:     <your licence>
#-------------------------------------------------------------------------------


sum=0
checknum=1

while(checknum<=1000) :
    if(checknum%5==0 or checknum%3==0) :
        sum = checknum+sum
    checknum = checknum+1

print sum
