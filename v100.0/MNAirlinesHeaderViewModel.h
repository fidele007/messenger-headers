/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNBusinessLogoViewModel, UIColor, MNBusinessLabelPairViewModel;

@interface MNAirlinesHeaderViewModel : FBValueObject <NSCopying> {

	MNBusinessLogoViewModel* _logo;
	UIColor* _backgroundColor;
	MNBusinessLabelPairViewModel* _labelPair1;
	MNBusinessLabelPairViewModel* _labelPair2;

}

@property (nonatomic,copy,readonly) MNBusinessLogoViewModel * logo;                         //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLabelPairViewModel * labelPair1;              //@synthesize labelPair1=_labelPair1 - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLabelPairViewModel * labelPair2;              //@synthesize labelPair2=_labelPair2 - In the implementation block
-(id)initWithLogo:(id)arg1 backgroundColor:(id)arg2 labelPair1:(id)arg3 labelPair2:(id)arg4 ;
-(MNBusinessLabelPairViewModel *)labelPair1;
-(MNBusinessLabelPairViewModel *)labelPair2;
-(UIColor *)backgroundColor;
-(MNBusinessLogoViewModel *)logo;
@end
