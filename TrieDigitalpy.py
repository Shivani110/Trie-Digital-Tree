class digital_tree(object):
   def __init__(self):
      self.sides = {}

   def In(self, n):
      i = self.sides
      for a in n:
         if a not in i:
            i[a] = {}
         i = i[a]
      i['#'] = 1
   def SearchA(self, n):
      i = self.sides
      for a in n:
         if a not in i:
            return False
         i = i[a]
      return '#' in i
   def initial(self, pfx):
      i = self.sides
      for a in pfx:
         if a not in i:
            return False
         i = i[a]
      return True
p = digital_tree()
p.In("yellow",)
print(p.SearchA("yellow"))
print(p.initial("man"))
print(p.SearchA("low"))
p.In("hello")
print(p.initial("hell"))
print(p.SearchA("lo"))