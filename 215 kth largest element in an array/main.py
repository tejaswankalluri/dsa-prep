from heapq import heapify, heappush,heappop

def findKthLargest(nums,k):
	heap = []
	heapify(heap)

	for ele in nums:
		heappush(heap,ele)
		if len(heap)> k:
			heappop(heap)
	return heap[0]

print(findKthLargest([3,2,1,5,6,4],2))