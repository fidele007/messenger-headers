/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcAckPayload_DEPRECATED : NSObject <TBase, NSCoding> {

	long long __ackMessageId;
	int __uploadLogLevel;
	NSString* __selectedFbExperiments;
	BOOL __ackMessageId_isset;
	BOOL __uploadLogLevel_isset;
	BOOL __selectedFbExperiments_isset;

}

@property (assign,setter=setAckMessageId:,getter=ackMessageId,nonatomic) long long ackMessageId; 
@property (assign,setter=setUploadLogLevel:,getter=uploadLogLevel,nonatomic) int uploadLogLevel; 
@property (setter=setSelectedFbExperiments:,getter=selectedFbExperiments,nonatomic,retain) NSString * selectedFbExperiments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setAckMessageId:(long long)arg1 ;
-(long long)ackMessageId;
-(BOOL)ackMessageIdIsSet;
-(void)unsetAckMessageId;
-(void)setUploadLogLevel:(int)arg1 ;
-(int)uploadLogLevel;
-(BOOL)uploadLogLevelIsSet;
-(void)unsetUploadLogLevel;
-(void)setSelectedFbExperiments:(NSString *)arg1 ;
-(id)initWithAckMessageId:(long long)arg1 uploadLogLevel:(int)arg2 selectedFbExperiments:(id)arg3 ;
-(NSString *)selectedFbExperiments;
-(BOOL)selectedFbExperimentsIsSet;
-(void)unsetSelectedFbExperiments;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

