/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNCrossProcessDiskWriting.h>

@protocol OS_dispatch_queue;
@class NSFileManager, MNFoundationFileSystemWrapper, FBLoggedInUserCryptoEngine, NSURL, NSString, NSObject;

@interface MNCrossProcessDiskWriter : NSObject <MNCrossProcessDiskWriting> {

	NSFileManager* _fileManager;
	MNFoundationFileSystemWrapper* _fileSystemWrapper;
	FBLoggedInUserCryptoEngine* _cryptoEngine;
	NSURL* _directoryURL;
	NSString* _filename;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFileSystemWrapper:(id)arg1 fileManager:(id)arg2 cryptoEngine:(id)arg3 directoryURL:(id)arg4 filename:(id)arg5 queue:(id)arg6 ;
-(id)writeData:(id)arg1 ;
@end

