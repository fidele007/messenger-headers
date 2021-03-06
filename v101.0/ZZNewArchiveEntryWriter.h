/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ZZArchiveEntryWriter.h>

@class NSMutableData;

@interface ZZNewArchiveEntryWriter : NSObject <ZZArchiveEntryWriter> {

	NSMutableData* _centralFileHeader;
	NSMutableData* _localFileHeader;
	long long _compressionLevel;
	/*^block*/id _dataBlock;
	/*^block*/id _streamBlock;
	/*^block*/id _dataConsumerBlock;

}
-(unsigned)offsetToLocalFileEnd;
-(BOOL)writeLocalFileToChannelOutput:(id)arg1 withInitialSkip:(unsigned)arg2 error:(out id*)arg3 ;
-(BOOL)writeCentralFileHeaderToChannelOutput:(id)arg1 error:(out id*)arg2 ;
-(id)initWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(long long)arg4 dataBlock:(/*^block*/id)arg5 streamBlock:(/*^block*/id)arg6 dataConsumerBlock:(/*^block*/id)arg7 ;
-(ZZCentralFileHeader*)centralFileHeader;
-(ZZLocalFileHeader*)localFileHeader;
@end

