#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <errno.h>
int main(int argc, char* argv[])
{
	printf("\n\n!!! Query Trojan - parent process may be deleted by mistake, please first screen the rm-rf code debugging output delete process file directory is deleted by mistake, if it is added to the anti-delete area in the execution, what improvement please contact my mailbox !!! \n");
	char str[32]={0};
	int item=0;
	while (1)
	{
		printf("\n ================================================");
		printf("\n -------------------------------------------");
		printf("\n XMR mine horse kill By:XiaoYu E-mail 771240158@qq.com (Deepin/Ubuntu/Centos)");
		printf("\n 1. Dig a Trojan");
		printf("\n 2. Add startup item (Power-on automatic guard kill virus) (not available)");
		printf("\n 3. Exit");
		printf("\n -------------------------------------------");
		printf("\n ================================================");
		printf("\n Please Select Item:");
		gets(str);
		item = atoi(str);
		int fork=0;
		switch (item)
		{
		case 1:
			fork=0;
			for(fork=0;fork<=3;fork++)
			{
				TodeleteaTrojan(argv[0]);//k马
			}
			printf("Mining procedure - parent procedure - has been deleted, please check the boot directory to manually clear invalid startup item\n");
			break;
		case 2:
			//oneself(argv[0]);//开机启动
			break;
		case 3:
			goto END;
		default:
			break;
		}
	}
	END:
	
	return 0;
}

void TodeleteaTrojan(){
	FILE *fp2 = NULL,*fp3 = NULL,*fp4 = NULL,*fp5 = NULL,*fp6 = NULL;
	char buf[512] = { 0 };
	char Proto[100]={0};
	char ProtoQ[100]={0};
	char SendQ[100]={0};
	char LocalAddress[100]={0};
	char ForeignAddress[100]={0};
	char State[100]={0};
	char PIDProgramname[100]={0};
	int PID=0;
	char Programname[50]={0};
	fp2 =popen("netstat -anp","r");
	if(fp2!=NULL)
	{
		while (fgets(buf, sizeof(buf), fp2))
		{
			sscanf(buf, "%s %s %s %s %s %s %s",Proto,ProtoQ,SendQ,LocalAddress,ForeignAddress,State,PIDProgramname);
			if (strstr(PIDProgramname,"/")!= NULL&&strstr(LocalAddress,":")!= NULL&&strstr(ForeignAddress,":")!= NULL)
			{
				sscanf(PIDProgramname,"%d/%s",&PID,Programname);
				if (strstr(LocalAddress,"61.147.247.87")!=NULL||strstr(ForeignAddress,"61.147.247.87")!=NULL||
					strstr(LocalAddress,"103.60.164.109")!=NULL||strstr(ForeignAddress,"103.60.164.109")!=NULL||
					strstr(LocalAddress,"203.107.40.49")!=NULL||strstr(ForeignAddress,"203.107.40.49")!=NULL||
					strstr(LocalAddress,"180.97.158.161")!=NULL||strstr(ForeignAddress,"180.97.158.161")!=NULL||
					strstr(LocalAddress,"108.61.164.63")!=NULL||strstr(ForeignAddress,"108.61.164.63")!=NULL||
					strstr(LocalAddress,"78.46.89.102")!=NULL||strstr(ForeignAddress,"78.46.89.102")!=NULL||
					strstr(LocalAddress,"37.187.154.79")!=NULL||strstr(ForeignAddress,"37.187.154.79")!=NULL||
					strstr(LocalAddress,"139.99.120.75")!=NULL||strstr(ForeignAddress,"139.99.120.75")!=NULL||
					strstr(LocalAddress,"172.105.221.37")!=NULL||strstr(ForeignAddress,"172.105.221.37")!=NULL||
					strstr(LocalAddress,"45.77.55.161")!=NULL||strstr(ForeignAddress,"45.77.55.161")!=NULL||
					strstr(LocalAddress,"61.216.5.103")!=NULL||strstr(ForeignAddress,"61.216.5.103")!=NULL||
					strstr(LocalAddress,"139.99.102.71")!=NULL||strstr(ForeignAddress,"139.99.102.71")!=NULL||
					strstr(LocalAddress,"104.23.102.173")!=NULL||strstr(ForeignAddress,"104.23.102.173")!=NULL||
					strstr(LocalAddress,"139.99.120.73")!=NULL||strstr(ForeignAddress,"139.99.120.73")!=NULL||
					strstr(LocalAddress,"47.106.153.143")!=NULL||strstr(ForeignAddress,"47.106.153.143")!=NULL||
					strstr(LocalAddress,"123.129.254.12")!=NULL||strstr(ForeignAddress,"123.129.254.12")!=NULL||
					strstr(LocalAddress,"42.51.195.132")!=NULL||strstr(ForeignAddress,"42.51.195.132")!=NULL||
					strstr(LocalAddress,"37.59.44.93")!=NULL||strstr(ForeignAddress,"37.59.44.93")!=NULL||
					strstr(LocalAddress,"158.69.25.71")!=NULL||strstr(ForeignAddress,"158.69.25.71")!=NULL||
					strstr(LocalAddress,"185.53.179.6")!=NULL||strstr(ForeignAddress,"185.53.179.6")!=NULL||
					strstr(LocalAddress,"162.210.195.122")!=NULL||strstr(ForeignAddress,"162.210.195.122")!=NULL||
					strstr(LocalAddress,"69.172.201.153")!=NULL||strstr(ForeignAddress,"69.172.201.153")!=NULL||
					strstr(LocalAddress,"72.52.179.174")!=NULL||strstr(ForeignAddress,"72.52.179.174")!=NULL||
					strstr(LocalAddress,"138.201.206.47")!=NULL||strstr(ForeignAddress,"138.201.206.47")!=NULL||
					strstr(LocalAddress,"52.4.209.250")!=NULL||strstr(ForeignAddress,"52.4.209.250")!=NULL||
					strstr(LocalAddress,"163.172.226.137")!=NULL||strstr(ForeignAddress,"163.172.226.137")!=NULL||
					strstr(LocalAddress,"195.154.62.247")!=NULL||strstr(ForeignAddress,"195.154.62.247")!=NULL||
					strstr(LocalAddress,"107.191.99.95")!=NULL||strstr(ForeignAddress,"107.191.99.95")!=NULL||
					strstr(LocalAddress,"104.25.155.105")!=NULL||strstr(ForeignAddress,"104.25.155.105")!=NULL||
					strstr(LocalAddress,"51.144.104.161")!=NULL||strstr(ForeignAddress,"51.144.104.161")!=NULL||
					strstr(LocalAddress,"104.31.74.121")!=NULL||strstr(ForeignAddress,"104.31.74.121")!=NULL||
					strstr(LocalAddress,"54.37.85.228")!=NULL||strstr(ForeignAddress,"54.37.85.228")!=NULL||
					strstr(LocalAddress,"104.20.122.34")!=NULL||strstr(ForeignAddress,"104.20.122.34")!=NULL||
					strstr(LocalAddress,"104.31.74.66")!=NULL||strstr(ForeignAddress,"104.31.74.66")!=NULL||
					strstr(LocalAddress,"203.107.40.49")!=NULL||strstr(ForeignAddress,"203.107.40.49")!=NULL||
					strstr(LocalAddress,"47.96.234.139")!=NULL||strstr(ForeignAddress,"47.96.234.139")!=NULL||
					strstr(LocalAddress,"60.28.226.20")!=NULL||strstr(ForeignAddress,"60.28.226.20")!=NULL)
				{
					char cmd[50]={0};
					sprintf(cmd,"ls -l /proc/%d",PID);
					fp3 =popen(cmd,"r");
					if(fp3!=NULL)
					{
						while (fgets(buf, sizeof(buf), fp3))
						{
							if(strstr(buf,"exe")!=NULL){
								char catalogue[50]={0};
								sscanf(buf,"%s %s %s %s %s %s %s %s  exe ->  %s",catalogue,catalogue,catalogue,catalogue,catalogue,catalogue,catalogue,catalogue,catalogue);
								
								fp4 =popen("ps -ef","r");
								if(fp4!=NULL)
								{
									while (fgets(buf, sizeof(buf), fp4))
									{
										int PSPID=0;
										char PScatalogue[50]={0};
										sscanf(buf,"%s %d %s %s %s %s %s %s",PScatalogue,&PSPID,PScatalogue,PScatalogue,PScatalogue,PScatalogue,PScatalogue,PScatalogue);	
										if(PSPID!=0)
										{	
											char ps[50]={0};
											sprintf(ps,"pstree -p %d",PSPID);
											fp5 =popen(ps,"r");
											if(fp5!=NULL)
											{
												fgets(buf, sizeof(buf), fp5);
												char PIDs[20]={0}; 
												sprintf(PIDs,"%d",PID);
												if(strstr(buf,PIDs)!=NULL)
												{
													sscanf(buf,"%*[^(](%[^)]s",PIDs);
													sprintf(cmd,"ls -l /proc/%s",PIDs);
													fp6 =popen(cmd,"r");
													if(fp6!=NULL)
													{
														char catalogue2[50]={0};
														while (fgets(buf, sizeof(buf), fp6))
														{
															if(strstr(buf,"exe")!=NULL){
																sscanf(buf,"%s %s %s %s %s %s %s %s  exe ->  %s",catalogue2,catalogue2,catalogue2,catalogue2,catalogue2,catalogue2,catalogue2,catalogue2,catalogue2);
															}
														}
														if(strstr(catalogue2,"/usr/bin/sudo")==NULL&&
														strstr(catalogue2,"/bin/bash")==NULL&&
														strstr(catalogue2,"/usr/bin/deepin-terminal")==NULL&&
														strstr(catalogue2,"/bin/dash")==NULL&&
														strstr(catalogue2,"/usr/bin/gnome-terminal")==NULL&&
														strstr(catalogue2,"/usr/sbin/sshd")==NULL)
														{
															sprintf(cmd,"kill -s 9 %s",PIDs);
															system(cmd);
															printf("cmd=%s\n",cmd);
															
															sprintf(cmd,"rm -rf %s",catalogue2);
															system(cmd);	
															printf("cmd=%s\n",cmd);
														}														
														pclose(fp6);
													}
													
													
												}

												pclose(fp5);
											}

											
										}
										
									}
									pclose(fp4);
								}
								sprintf(cmd,"kill -s 9 %d",PID);
								system(cmd);
								printf("cmd=%s\n",cmd);
								
								sprintf(cmd,"rm -rf %s",catalogue);
								system(cmd);
								printf("cmd=%s\n",cmd);
								break;
							}
						}
						pclose(fp3);
					}
					
				}
			}
		}
		pclose(fp2);
		return;
	}

}


void oneself(char *path){
	char name[50]={0};
	get_filename(path,name);

	char buf[512] = { 0 };
	FILE *fp1 = NULL,*fp2 = NULL;
	fp1 =popen("pwd","r");
	if(fp1!=NULL)
	{
		fscanf(fp1,"%s",buf);
		pclose(fp1);
		fp2 =fopen("/etc/rc.local","w");
		if(fp2!=NULL)
		{
			fprintf(fp2, "#!/bin/bash\n");
			fprintf(fp2, "# rc.local config file created by use\n");
			fprintf(fp2, "%s/%s\n",buf,name);
			fprintf(fp2, "exit 0\n");
			system("sudo chmod +x /etc/rc.local");
			fclose(fp2);
		}
		
	}
	
}
void get_filename(char *path, char *name)
{
    int i,j = 0;
    for(i = 0; path[i]; i ++){
		if(path[i] == '/'){
			j = i;
			strcpy(name, &path[j+1]);
		}
    }

    
}


