def maxArea(height):
	"""
	:type height: List[int]
	:rtype: int
	"""

	res = 0
	i = 0
	j = len(height) - 1
	while i<j:
		h = min(height[i],height[j])
		res = max(res,(j-i)*h)
		while height[i] <=h and i<j:
			i += 1
		while height[j]<=h and i<j:
			j -= 1
	return res

if __name__ == '__main__':
	height = [7,4,1,100,50]
	print(maxArea(height))