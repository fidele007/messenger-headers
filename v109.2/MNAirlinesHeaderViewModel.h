/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
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

