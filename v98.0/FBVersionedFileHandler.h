/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, NSUserDefaults;

@interface FBVersionedFileHandler : NSObject {

	NSFileManager* _fileManager;
	NSUserDefaults* _userDefaults;

}
-(id)initFileManager:(id)arg1 userDefaults:(id)arg2 ;
-(id)openAndPrepareVersionedFile:(id)arg1 configurationDelegate:(id)arg2 configurationListener:(id)arg3 ;
-(void)discardFile:(id)arg1 ;
-(id)_openFileWithUrl:(id)arg1 configurationDelegate:(id)arg2 ;
-(unsigned long long)_checkFileBeingConfiguredByDelegate:(id)arg1 version:(id)arg2 ;
-(BOOL)_createSchemaAndAnnounceForFileBeingConfiguredByDelegate:(id)arg1 listener:(id)arg2 ;
-(id)_rebuildFile:(id)arg1 listener:(id)arg2 configurationDelegate:(id)arg3 ;
-(void)_executeDiscardFileAtUrl:(id)arg1 listener:(id)arg2 ;
@end

