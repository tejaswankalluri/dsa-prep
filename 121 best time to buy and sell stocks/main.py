def maxProfit(prices):
	maxprofit = 0
	minsofar = prices[0]
	for num in prices:
		minsofar = min(minsofar,num)
		maxprofit = max(maxprofit,num-minsofar)
	return maxprofit

print(maxProfit([7,1,5,3,6,4]))