/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNAirlinesHeaderViewModel, MNBusinessStackedContainerViewModel, MNBusinessLabelViewModel;

@interface MNAirlinesMessageCheckInViewModel : FBValueObject <NSCopying> {

	NSString* _checkInURLString;
	MNAirlinesHeaderViewModel* _headerViewModel;
	MNBusinessStackedContainerViewModel* _flightInfoSectionsViewModel;
	MNBusinessLabelViewModel* _checkInButtonLabelViewModel;

}

@property (nonatomic,copy,readonly) NSString * checkInURLString;                                                    //@synthesize checkInURLString=_checkInURLString - In the implementation block
@property (nonatomic,copy,readonly) MNAirlinesHeaderViewModel * headerViewModel;                                    //@synthesize headerViewModel=_headerViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * flightInfoSectionsViewModel;              //@synthesize flightInfoSectionsViewModel=_flightInfoSectionsViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLabelViewModel * checkInButtonLabelViewModel;                         //@synthesize checkInButtonLabelViewModel=_checkInButtonLabelViewModel - In the implementation block
-(MNAirlinesHeaderViewModel *)headerViewModel;
-(id)initWithCheckInURLString:(id)arg1 headerViewModel:(id)arg2 flightInfoSectionsViewModel:(id)arg3 checkInButtonLabelViewModel:(id)arg4 ;
-(MNBusinessStackedContainerViewModel *)flightInfoSectionsViewModel;
-(MNBusinessLabelViewModel *)checkInButtonLabelViewModel;
-(NSString *)checkInURLString;
@end

