/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MSQModelUndoableObject.h>
#import <Messenger/MSQModelUndoable.h>

@class NSMutableArray, NSString;

@interface MSQModelUndoablePrimitive : MSQModelUndoableObject <MSQModelUndoable> {

	id _suspendedValue;
	BOOL _hasSuspendedValue;
	BOOL _shouldSuspendValue;
	long long _undoableState;
	NSMutableArray* _mutableCustomEvents;
	BOOL _dispatchesChangeEventOnChange;
	id _value;
	/*^block*/id _changeBlock;
	/*^block*/id _updateBlock;

}

@property (assign,nonatomic) long long integerValue; 
@property (assign,nonatomic) unsigned long long unsignedIntegerValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (assign,nonatomic) double CGFloatValue; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,retain) id value;                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) id changeBlock;                                         //@synthesize changeBlock=_changeBlock - In the implementation block
@property (assign,nonatomic) BOOL dispatchesChangeEventOnChange;                   //@synthesize dispatchesChangeEventOnChange=_dispatchesChangeEventOnChange - In the implementation block
@property (nonatomic,copy) id updateBlock;                                         //@synthesize updateBlock=_updateBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long undoableState; 
+(id)copyableValue:(id)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
+(id)doubleValue:(double)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
+(id)unsignedIntegerValue:(unsigned long long)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
+(id)boolValue:(BOOL)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
+(id)CGFloatValue:(double)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
+(id)integerValue:(long long)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
+(id)undoableValue:(id)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
+(id)floatValue:(float)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(long long)undoableState;
-(void)setUndoableState:(long long)arg1 ;
-(void)onChangeDispatchEventOfType:(id)arg1 bubbles:(BOOL)arg2 ;
-(void)setDispatchesChangeEventOnChange:(BOOL)arg1 ;
-(void)setUnsignedIntegerValue:(unsigned long long)arg1 ;
-(id)initWithKeypath:(id)arg1 options:(unsigned long long)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(id)initWithValue:(id)arg1 keypath:(id)arg2 options:(unsigned long long)arg3 objectContext:(id)arg4 documentContext:(id)arg5 ;
-(id)initWithCopyableValue:(id)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(id)initWithUndoableValue:(id)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(void)updatePropertyValueFrom:(id)arg1 to:(id)arg2 ;
-(void)_registerPreviousValue:(id)arg1 ;
-(void)_dispatchEventIfPresent;
-(void)_dispatchChangeEventIfRequired;
-(BOOL)dispatchesChangeEventOnChange;
-(id)initWithIntegerValue:(long long)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(id)initWithUnsignedIntegerValue:(unsigned long long)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(id)initWithBoolValue:(BOOL)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(id)initWithCGFloatValue:(double)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(id)initWithFloatValue:(float)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(id)initWithDoubleValue:(double)arg1 keypath:(id)arg2 objectContext:(id)arg3 documentContext:(id)arg4 ;
-(void)setCGFloatValue:(double)arg1 ;
-(long long)integerValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(id)value;
-(void)setValue:(id)arg1 ;
-(float)floatValue;
-(unsigned long long)unsignedIntegerValue;
-(id)changeBlock;
-(void)setChangeBlock:(id)arg1 ;
-(void)setIntegerValue:(long long)arg1 ;
-(void)setFloatValue:(float)arg1 ;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(double)CGFloatValue;
@end

