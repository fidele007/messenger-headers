/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAutoupdaterInstaller <NSObject>
@required
+(id)new;
-(id)installedUpdatesForHost:(id)arg1;
-(id)initWithUpdateInstallFolderExtension:(id)arg1;
-(id)loadUpdateFromPath:(id)arg1 error:(id*)arg2;
-(BOOL)isUpdateInstalledAtPath:(id)arg1;
-(id)updateInstallFolderExtension;
-(BOOL)install:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 error:(id*)arg4;
-(id)init;

@end
