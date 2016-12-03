/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNInboxImpressionLoggingData, NSURL;

@interface MNInboxCandidateViewModel : FBValueObject <NSCopying> {

	NSString* _candidateId;
	MNInboxImpressionLoggingData* _loggingData;
	NSString* _fullName;
	NSString* _timelineContext;
	NSURL* _imageURL;
	long long _candidateType;

}

@property (nonatomic,copy,readonly) NSString * candidateId;                                  //@synthesize candidateId=_candidateId - In the implementation block
@property (nonatomic,copy,readonly) MNInboxImpressionLoggingData * loggingData;              //@synthesize loggingData=_loggingData - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName;                                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * timelineContext;                              //@synthesize timelineContext=_timelineContext - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) long long candidateType;                                      //@synthesize candidateType=_candidateType - In the implementation block
-(MNInboxImpressionLoggingData *)loggingData;
-(long long)candidateType;
-(NSString *)candidateId;
-(id)initWithCandidateId:(id)arg1 loggingData:(id)arg2 fullName:(id)arg3 timelineContext:(id)arg4 imageURL:(id)arg5 candidateType:(long long)arg6 ;
-(NSString *)timelineContext;
-(NSURL *)imageURL;
-(NSString *)fullName;
@end

