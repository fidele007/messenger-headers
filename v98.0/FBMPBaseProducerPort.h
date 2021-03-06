/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMPProducerPort.h>

@protocol FBMPInput;
@class NSString;

@interface FBMPBaseProducerPort : NSObject <FBMPProducerPort> {

	Class _type;
	BOOL _stopsPerfTracking;
	/*^block*/id _produceBlock;
	id<FBMPInput> _input;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) id produceBlock;                                     //@synthesize produceBlock=_produceBlock - In the implementation block
@property (assign,nonatomic,__weak) id<FBMPInput> input;              //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) BOOL stopsPerfTracking;                //@synthesize stopsPerfTracking=_stopsPerfTracking - In the implementation block
-(id)initWithDataType:(Class)arg1 stopsPerfTracking:(BOOL)arg2 ;
-(id)produceBlock;
-(Class)producerPortDataType;
-(void)setProduceBlock:(id)arg1 ;
-(BOOL)stopsPerfTracking;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<FBMPInput>)input;
-(void)setInput:(id<FBMPInput>)arg1 ;
@end

