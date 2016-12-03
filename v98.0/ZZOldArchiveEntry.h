/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ZZArchiveEntry.h>

@class NSDate, NSString;

@interface ZZOldArchiveEntry : ZZArchiveEntry {

	ZZCentralFileHeader* _centralFileHeader;
	ZZLocalFileHeader* _localFileHeader;
	unsigned long long _encoding;
	long long _encryptionMode;

}

@property (nonatomic,readonly) BOOL compressed; 
@property (nonatomic,readonly) BOOL encrypted; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) unsigned long long crc32; 
@property (nonatomic,readonly) unsigned long long compressedSize; 
@property (nonatomic,readonly) unsigned long long uncompressedSize; 
@property (nonatomic,readonly) unsigned short fileMode; 
@property (nonatomic,readonly) NSString * fileName; 
-(unsigned short)fileMode;
-(id)initWithCentralFileHeader:(ZZCentralFileHeader*)arg1 localFileHeader:(ZZLocalFileHeader*)arg2 encoding:(unsigned long long)arg3 ;
-(id)newWriterCanSkipLocalFile:(BOOL)arg1 ;
-(id)newStreamWithPassword:(id)arg1 error:(out id*)arg2 ;
-(id)newDataWithPassword:(id)arg1 error:(out id*)arg2 ;
-(CGDataProviderRef)newDataProviderWithPassword:(id)arg1 error:(out id*)arg2 ;
-(BOOL)checkEncryptionAndCompression:(out id*)arg1 ;
-(id)streamForData:(id)arg1 withPassword:(id)arg2 error:(out id*)arg3 ;
-(unsigned long long)uncompressedSize;
-(unsigned short)compressionMethod;
-(BOOL)compressed;
-(id)fileData;
-(unsigned long long)compressedSize;
-(NSDate *)lastModified;
-(BOOL)check:(out id*)arg1 ;
-(BOOL)encrypted;
-(NSString *)fileName;
-(unsigned long long)crc32;
-(id)stringWithBytes:(char*)arg1 length:(unsigned long long)arg2 ;
@end

