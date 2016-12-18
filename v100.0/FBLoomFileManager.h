/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLoomRingBufferReaderDataSource.h>
#import <Messenger/FBLoomConfigurationStorageDelegate.h>

@protocol FBLoomFileManagerDelegate, FBLoomFileLogPermissionSource;
@class NSURL;

@interface FBLoomFileManager : NSObject <FBLoomRingBufferReaderDataSource, FBLoomConfigurationStorageDelegate> {

	unsigned long long _maxArchivedTraces;
	double _maxTraceAge;
	mutex _mutex;
	id<FBLoomFileManagerDelegate> _delegate;
	id<FBLoomFileLogPermissionSource> _permissionSource;
	NSURL* _archiveDirectory;
	NSURL* _activeDirectory;
	NSURL* _configDirectory;
	NSURL* _uploadDirectory;

}

@property (nonatomic,retain) NSURL * archiveDirectory;                              //@synthesize archiveDirectory=_archiveDirectory - In the implementation block
@property (nonatomic,retain) NSURL * activeDirectory;                               //@synthesize activeDirectory=_activeDirectory - In the implementation block
@property (nonatomic,retain) NSURL * configDirectory;                               //@synthesize configDirectory=_configDirectory - In the implementation block
@property (nonatomic,retain) NSURL * uploadDirectory;                               //@synthesize uploadDirectory=_uploadDirectory - In the implementation block
@property (__weak) id<FBLoomFileManagerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<FBLoomFileLogPermissionSource> permissionSource;              //@synthesize permissionSource=_permissionSource - In the implementation block
+(BOOL)isLoomLogFile:(id)arg1 ;
-(id)fetchConfigurationFromDiskForManager:(id)arg1 ;
-(void)managerDidEraseConfiguration:(id)arg1 ;
-(void)manager:(id)arg1 didUpdateConfiguration:(id)arg2 ;
-(id<FBLoomFileLogPermissionSource>)permissionSource;
-(void)recordAction:(short)arg1 forMarker:(int)arg2 ;
-(void)trimFolders;
-(id)fetchStartupConfigurationFromDiskForManager:(id)arg1 ;
-(void)manager:(id)arg1 didUpdateStartupConfiguration:(id)arg2 ;
-(NSURL *)activeDirectory;
-(void)setActiveDirectory:(NSURL *)arg1 ;
-(NSURL *)configDirectory;
-(void)setConfigDirectory:(NSURL *)arg1 ;
-(NSURL *)uploadDirectory;
-(void)setUploadDirectory:(NSURL *)arg1 ;
-(id)initWithMaxArchivedTraces:(unsigned long long)arg1 maxTraceAge:(double)arg2 ;
-(void)setPermissionSource:(id<FBLoomFileLogPermissionSource>)arg1 ;
-(void)clearAllFiles;
-(BOOL)moveFile:(id)arg1 toDirectory:(id)arg2 ;
-(id)bufferedReader:(id)arg1 fileWriterWithTraceID:(long long)arg2 ;
-(void)setDelegate:(id<FBLoomFileManagerDelegate>)arg1 ;
-(id<FBLoomFileManagerDelegate>)delegate;
-(NSURL *)archiveDirectory;
-(void)setArchiveDirectory:(NSURL *)arg1 ;
@end
