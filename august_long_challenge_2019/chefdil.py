'''***
	*
   ***'''
t = int(input())
while t:
	t = t - 1
	s = input()
	onez = s.count('1');
	if (onez%2) == 1:
		print('WIN')
	else:
		print('LOSE')
