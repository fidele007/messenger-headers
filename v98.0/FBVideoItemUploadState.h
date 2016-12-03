/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBVideoUploadConfig, NSArray, NSString;

@interface FBVideoItemUploadState : FBValueObject <NSCopying, NSCoding> {

	BOOL _allSegmentsAdded;
	unsigned long long _requestState;
	FBVideoUploadConfig* _uploadConfig;
	unsigned long long _fileSize;
	NSArray* _segmentsToBeUploaded;
	unsigned long long _numSegmentsFinishedUploading;
	NSString* _uploadSessionID;
	NSString* _videoFBID;

}

@property (nonatomic,readonly) unsigned long long requestState;                              //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,copy,readonly) FBVideoUploadConfig * uploadConfig;                      //@synthesize uploadConfig=_uploadConfig - In the implementation block
@property (nonatomic,readonly) unsigned long long fileSize;                                  //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segmentsToBeUploaded;                          //@synthesize segmentsToBeUploaded=_segmentsToBeUploaded - In the implementation block
@property (nonatomic,readonly) unsigned long long numSegmentsFinishedUploading;              //@synthesize numSegmentsFinishedUploading=_numSegmentsFinishedUploading - In the implementation block
@property (nonatomic,readonly) BOOL allSegmentsAdded;                                        //@synthesize allSegmentsAdded=_allSegmentsAdded - In the implementation block
@property (nonatomic,copy,readonly) NSString * uploadSessionID;                              //@synthesize uploadSessionID=_uploadSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoFBID;                                    //@synthesize videoFBID=_videoFBID - In the implementation block
-(NSString *)uploadSessionID;
-(NSString *)videoFBID;
-(FBVideoUploadConfig *)uploadConfig;
-(NSArray *)segmentsToBeUploaded;
-(unsigned long long)numSegmentsFinishedUploading;
-(BOOL)allSegmentsAdded;
-(id)initWithRequestState:(unsigned long long)arg1 uploadConfig:(id)arg2 fileSize:(unsigned long long)arg3 segmentsToBeUploaded:(id)arg4 numSegmentsFinishedUploading:(unsigned long long)arg5 allSegmentsAdded:(BOOL)arg6 uploadSessionID:(id)arg7 videoFBID:(id)arg8 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)requestState;
-(unsigned long long)fileSize;
@end
