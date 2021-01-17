FROM centos:8


## systat = iostat,mpstat,sar
RUN rm -rf /etc/yum.repos.d/* && \
    curl -o /etc/yum.repos.d/CentOS-Base.repo http://mirrors.aliyun.com/repo/Centos-8.repo && \
    dnf -y install gcc-c++ cmake

    
ENTRYPOINT ["/sbin/init"]
    
