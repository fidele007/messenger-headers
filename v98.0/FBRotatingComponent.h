/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@interface FBRotatingComponent : CKCompositeComponent {

	double _angle;

}

@property (nonatomic,readonly) double angle;              //@synthesize angle=_angle - In the implementation block
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 component:(id)arg2 angle:(double)arg3 identifier:(id)arg4 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(double)angle;
@end

