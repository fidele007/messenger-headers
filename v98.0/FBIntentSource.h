/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIView;

@interface FBIntentSource : NSObject {

	SCD_Union_FB314 _location;
	unsigned long long _type;
	UIView* _view;

}

@property (nonatomic,__weak,readonly) UIView * view;              //@synthesize view=_view - In the implementation block
+(id)sourceForRect:(CGRect)arg1 inView:(id)arg2 ;
+(id)sourceForPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(CGPoint)pointInView:(id)arg1 ;
-(CGRect)rectInView:(id)arg1 ;
-(UIView *)view;
@end

