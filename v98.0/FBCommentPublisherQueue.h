/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray;

@interface FBCommentPublisherQueue : NSObject <NSCoding> {

	NSMutableArray* _internalQueue;

}

@property (nonatomic,readonly) NSMutableArray * internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
-(void)enqueuePublishRequest:(id)arg1 ;
-(id)requestAtHead;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)dequeue;
-(NSMutableArray *)internalQueue;
@end
