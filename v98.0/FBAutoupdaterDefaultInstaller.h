/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(id)installedUpdatesForHost:(id)arg1 ;
-(void)_failWithMessage:(id)arg1 error:(id*)arg2 underlyingError:(id)arg3 ;
@end

