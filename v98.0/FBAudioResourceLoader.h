/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, NSURL;

@interface FBAudioResourceLoader : NSObject {

	NSFileManager* _fileManager;
	NSURL* _fileURL;
	unsigned _systemSoundID;

}
+(id)name;
+(id)data;
+(unsigned long long)version;
+(id)sharedLoader;
-(BOOL)loadSound:(id*)arg1 ;
-(id)_fileURL:(id*)arg1 ;
-(id)_fileResourceURL;
-(void)dealloc;
-(id)init;
-(void)playSound;
@end

