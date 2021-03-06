/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ZZArchiveEntry.h>

@class NSString, NSDate;

@interface ZZNewArchiveEntry : ZZArchiveEntry {

	NSString* _fileName;
	unsigned short _fileMode;
	NSDate* _lastModified;
	long long _compressionLevel;
	/*^block*/id _dataBlock;
	/*^block*/id _streamBlock;
	/*^block*/id _dataConsumerBlock;

}

@property (nonatomic,readonly) BOOL compressed; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) unsigned short fileMode; 
@property (nonatomic,readonly) NSString * fileName; 
-(unsigned short)fileMode;
-(id)newWriterCanSkipLocalFile:(BOOL)arg1 ;
-(id)initWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(long long)arg4 dataBlock:(/*^block*/id)arg5 streamBlock:(/*^block*/id)arg6 dataConsumerBlock:(/*^block*/id)arg7 ;
-(BOOL)compressed;
-(NSDate *)lastModified;
-(NSString *)fileName;
@end

