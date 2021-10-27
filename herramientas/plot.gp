set xlabel 'N term'; set ylabel 'Diff %'
set term pdf; set out "fig.pdf"
plot 'datossumas.txt'u 1:5 w l t 'Diferencia porcentua S1-S3'  ,'datossumas.txt'u 1:6 w l  t 'Diferencia porcentua S2-S3' 