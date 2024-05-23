#!/usr/bin/env bash
# Test script for task 101-mul.c
# Generates random integers and checks the multiplication result

# Initialize counters for passed and failed test cases
PASSED=0
FAILED=0

# Run the test cases
for ((i = 0; i < 10; i++)); do
    random1=$((RANDOM - RANDOM))
    random2=$((RANDOM - RANDOM))

    # Execute the program and compare its output with the expected result
    if [ "$(./101-mul "$random1" "$random2")" != $((random1 * random2)) ]; then
        echo "TestCase $i: mul $random1 $random2 failed"
        ((FAILED += 1))
    else
        echo "TestCase $i: mul $random1 $random2 passed"
        ((PASSED += 1))
    fi
done

# Test big integers
BIG1=235234693269436436223446526546334576437634765378653875874687649698659586695898579
BIG2=28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715925006962738262888617840435389140329668772644708
MULBIG=6741363923575589187997046452422615907476091498993541335055687577080701989306920124712185512283638941702255216631601001307425878158314387046118270789357784940867204055508948216034308548261234814532268988302522598879945232929028116992753216059081057377926651337612618248332113256902485974371969385156015068813868274000683912187818601667058605418678284322237297213673482412392922068159291496274311170208689056585352782844484721140846367741649962638649229509281867896067208474178402156294978940712959518351846413859141792380853313812015295333546716634344284086426775480775747808150030732119704867805688704303461042373101473485092019906795014369069932


rndSign1=$(($((RANDOM - RANDOM)) % 10))
if [ $rndSign1 -le 0 ]; then
    rndSign1=-1
else
    rndSign1=1
fi

rndSign2=$(($((RANDOM - RANDOM)) % 10))
if [ $rndSign2 -le 0 ]; then
    rndSign2=-1
else
    rndSign2=1
fi

if [ "$(./101-mul $BIG1 $BIG2)" != $MULBIG ]; then
        echo "TestCase Big Integers 1: failed"
        ((FAILED += 1))
    else
        echo "TestCase Big Integers 1:  passed"
        ((PASSED += 1))
    fi

if [ "$(./101-mul "$(./101-mul $BIG1 $rndSign1)" "$(./101-mul $BIG2 $rndSign2)")" != "$(./101-mul $MULBIG $((rndSign1 * rndSign2)))" ]; then
        echo "TestCase Big Integers 2: failed"
        ((FAILED += 1))
    else
        echo "TestCase Big Integers 2: passed"
        ((PASSED += 1))
    fi


# Test Leading zero
if [ "$(./101-mul 05 099)" != $((5 * 99)) ]; then
    echo "TestCase LeadingZero 1: failed"
    ((FAILED += 1))
else
    echo "TestCase LeadingZero 1:  passed"
    ((PASSED += 1))
fi
if [ "$(./101-mul 5 099)" != $((5 * 99)) ]; then
    echo "TestCase LeadingZero 2: failed"
    ((FAILED += 1))
else
    echo "TestCase LeadingZero 2:  passed"
    ((PASSED += 1))
fi
if [ "$(./101-mul 05 99)" != $((5 * 99)) ]; then
    echo "TestCase LeadingZero 3: failed"
    ((FAILED += 1))
else
    echo "TestCase LeadingZero 3:  passed"
    ((PASSED += 1))
fi


# Test Errors
if [ "$(./101-mul $RANDOM)" != "Error" ]; then
    echo "TestCase ErrorOneArg: failed"
    ((FAILED += 1))
else
    echo "TestCase ErrorOneArg:  passed"
    ((PASSED += 1))
fi

if [ "$(./101-mul)" != "Error" ]; then
    echo "TestCase ErrorNoArgs: failed"
    ((FAILED += 1))
else
    echo "TestCase ErrorNoArgs:  passed"
    ((PASSED += 1))
fi

if [ "$(./101-mul $RANDOM $RANDOM $RANDOM)" != "Error" ]; then
    echo "TestCase ErrorExtraArgs: failed"
    ((FAILED += 1))
else
    echo "TestCase ErrorExtraArgs:  passed"
    ((PASSED += 1))
fi

if [ "$(./101-mul mjhk $RANDOM)" != "Error" ]; then
    echo "TestCase ErrorNotInt: failed"
    ((FAILED += 1))
else
    echo "TestCase ErrorNotInt:  passed"
    ((PASSED += 1))
fi

if [ "$(./101-mul $RANDOM 1.55)" != "Error" ]; then
    echo "TestCase ErrorNFloat: failed"
    ((FAILED += 1))
else
    echo "TestCase ErrorFloat:  passed"
    ((PASSED += 1))
fi


# Display test summary
echo
echo "------------Test Summary------------"
echo -e "\e[32m$PASSED test cases passed\e[0m"
echo -e "\e[31m$FAILED test cases failed\e[0m"

# Exit with appropriate status code
exit 0
