/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWorkingRangeItemViewState.h>

@class NSString;

@interface FBComponentWorkingRangeItemViewState : NSObject <FBWorkingRangeItemViewState> {

	CKComponentLayout* _layout;
	NSString* _identifier;
	unsigned long long _hash;
	id _item;
	CGRect _frame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id item;                             //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) CGRect frame;                        //@synthesize frame=_frame - In the implementation block
-(id)initWithItem:(id)arg1 identifier:(id)arg2 frame:(CGRect)arg3 layout:(const CKComponentLayout*)arg4 ;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const CKComponentLayout*)layout;
@end

