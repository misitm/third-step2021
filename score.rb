score_sci=[65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70]
score_eng=[44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]
#平均
ave_sci=score_sci.sum.to_f/score_sci.size.to_f
ave_eng=score_eng.sum.to_f/score_eng.size.to_f

p "平均点"
p ave_sci
p ave_eng

sum=0
#標準偏差
#
p "標準偏差"
for i in 0..19 do
  sum+=(score_sci[i]-ave_sci)**2
end
hensa_sci=Math.sqrt(1/score_sci.size.to_f*sum)
p hensa_sci

sum=0
for i in 0..19 do
  sum+=(score_eng[i]-ave_eng)**2
end
hensa_eng=Math.sqrt(1/score_eng.size.to_f*sum)
p hensa_eng

#合計点
p "合計点"
p score_sci.sum
p score_eng.sum

#偏差値
p "理科偏差値"
for i in 0..19 do
  p 10*(score_sci[i]-ave_sci)/hensa_sci+50
end

p "英語偏差値"
for i in 0..19 do
  p 10*(score_eng[i]-ave_eng)/hensa_eng+50
end

#ソート
p "ソート"

p score_sci.sort.reverse
p score_eng.sort.reverse
