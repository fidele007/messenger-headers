/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTGraphQLResponse : NSObject <TBase, NSCoding> {

	int __requestId;
	NSString* __queryResponse;
	BOOL __requestId_isset;
	BOOL __queryResponse_isset;

}

@property (assign,setter=setRequestId:,getter=requestId,nonatomic) int requestId; 
@property (setter=setQueryResponse:,getter=queryResponse,nonatomic,retain) NSString * queryResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)requestIdIsSet;
-(void)unsetRequestId;
-(void)setQueryResponse:(NSString *)arg1 ;
-(id)initWithRequestId:(int)arg1 queryResponse:(id)arg2 ;
-(NSString *)queryResponse;
-(BOOL)queryResponseIsSet;
-(void)unsetQueryResponse;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(int)requestId;
-(void)setRequestId:(int)arg1 ;
-(void)write:(id)arg1 ;
@end

