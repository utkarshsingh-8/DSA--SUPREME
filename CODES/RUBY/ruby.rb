# MERGE


# 10.times do
#   puts "merge"
# end

# 5.times { puts "Hello!"}

# [1,2,3,4,5].each { |number| puts ("#{number} in the arrays")}

# [6,7,8,9,10].each do |number|
#   puts ("#{number} in the arrays")
# end

p [1, 2, 3, 4, 5].collect { |number| number * 5 }
