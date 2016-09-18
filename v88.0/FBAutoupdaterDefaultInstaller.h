/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoupdaterInstaller.h>

@protocol OS_dispatch_queue;
@class NSFileManager, NSObject, NSString;

@interface FBAutoupdaterDefaultInstaller : NSObject <FBAutoupdaterInstaller> {

	NSFileManager* _fileManager;
	NSObject*<OS_dispatch_queue> _removalQueue;
	NSString* _updateInstallFolderExtension;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)installedUpdatesForHost:(id)arg1 ;
-(BOOL)remove:(id)arg1 error:(id*)arg2 ;
-(id)initWithUpdateInstallFolderExtension:(id)arg1 ;
-(id)loadUpdateFromPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)isUpdateInstalledAtPath:(id)arg1 ;
-(BOOL)_createPathIfNeeded:(id)arg1 error:(id*)arg2 ;
-(id)updateInstallFolderExtension;
-(BOOL)_verifyInstallPreconditionsFromPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(void)_setMetadataForUpdate:(id)arg1 basePath:(id)arg2 ;
-(BOOL)_saveMetadataForUpdate:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)installFolderForUpdate:(id)arg1 ;
-(BOOL)install:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 error:(id*)arg4 ;
-(void)_failWithMessage:(id)arg1 error:(id*)arg2 underlyingError:(id)arg3 ;
@end
