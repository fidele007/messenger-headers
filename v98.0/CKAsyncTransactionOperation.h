/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@interface CKAsyncTransactionOperation : NSObject {

	/*^block*/id _operationCompletionBlock;
	id<NSObject> _value;

}

@property (nonatomic,copy) id operationCompletionBlock;              //@synthesize operationCompletionBlock=_operationCompletionBlock - In the implementation block
@property (retain) id<NSObject> value;                               //@synthesize value=_value - In the implementation block
-(void)setOperationCompletionBlock:(id)arg1 ;
-(id)initWithOperationCompletionBlock:(/*^block*/id)arg1 ;
-(void)callAndReleaseCompletionBlock:(BOOL)arg1 ;
-(id)operationCompletionBlock;
-(void)dealloc;
-(id<NSObject>)value;
-(void)setValue:(id<NSObject>)arg1 ;
@end

