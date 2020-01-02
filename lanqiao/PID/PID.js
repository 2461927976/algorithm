function Pid() {
    this.nowHeight = 50;
    this.expectHeight = 0;
    this.err = 0;
    this.err_last = 0;
    this.Kp = 0;
    this.Ki = 0;
    this.Kd = 0;
    this.integral = 0;
}

let pid = new Pid();

function pidCal() {
    pid.expectHeight = $("#expext").val();
    pid.err = pid.expectHeight - pid.nowHeight;
    pid.integral += pid.err;
    pid.Kp = $("#Kp").val();
    pid.Ki = $("#Ki").val();
    pid.Kd = $("#Kd").val();
    pid.nowHeight = pid.Kp * pid.err  + pid.Ki * pid.integral + pid.Kd * (pid.err - pid.err_last);
    pid.err_last = pid.err;
    return pid.nowHeight;
}

let make = ()=>{
    let count = 0;
    pid.nowHeight = $("#leakInit").val();
    console.log(pid.nowHeight);
    while (count < 200) {
        let height = pidCal();
        console.log(height)
        config.data.datasets[0].data.push(height)
        count++;
    }
}