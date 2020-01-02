let date1 = new Date()
let date0 = new Date()
let rest = 60
let dates = []
let date2 = (date) => {
    let t = new Date(date.setUTCSeconds(date.getSeconds() + 1))
    dates.push(t)
    return t
}

function leakInit() {
    rest = $("#leakInit").val()
    return rest
}

function expect(expect) {
    for (let i = 0; i<15 ; i++) {
        config.data.datasets[1].data.push(expect)
    }
}

let config = {
    type: 'line',

    // The data for our dataset
    data: {
        labels: [
            date0,
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1),
            date2(date1)
        ],
        datasets: [{
            label: "实时水量",
            borderColor: 'rgb(255, 99, 132)',
            backgroundColor: 'rgb(255, 99, 132)',
            data: [],
            fill: false
        },{
            label: "设定水位",
            borderColor: 'rgb(26,228,25)',
            backgroundColor: 'rgb(26,228,25)',
            data: [],
            fill: false
        }]
    },

    // Configuration options go here
    options: {
        responsive: true,
        animation: false,
        title: {
            display: true,
            text: 'PID校正',
            fontSize: 20
        },
        scales: {
            yAxes: [{
                display: true,
                scaleLabel: {
                   display: true,
                    labelString: '水缸水量'
                },
                ticks: {
                    min: 0,
                    max: 100,
                    stepSize: 5,
                    fontSize: 15
                }
            }],
            xAxes: [{
                scaleLabel: {
                    display: true,
                    labelString: '时间'
                },
                type: 'time',
                time: {
                    unit: 'second',
                    round: 'second',
                    displayFormats: {
                        second: 'h:mm:ss'
                    }
                }
            }]
        }
    }
}