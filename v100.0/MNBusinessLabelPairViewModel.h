/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNBusinessLabelViewModel;

@interface MNBusinessLabelPairViewModel : FBValueObject <NSCopying> {

	MNBusinessLabelViewModel* _label1;
	MNBusinessLabelViewModel* _label2;
	double _labelSpacing;

}

@property (nonatomic,copy,readonly) MNBusinessLabelViewModel * label1;              //@synthesize label1=_label1 - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessLabelViewModel * label2;              //@synthesize label2=_label2 - In the implementation block
@property (nonatomic,readonly) double labelSpacing;                                 //@synthesize labelSpacing=_labelSpacing - In the implementation block
+(id)MNBusinessLabelPairViewModelWithLabel1String:(id)arg1 label2String:(id)arg2 label1Color:(id)arg3 label2Color:(id)arg4 label1Font:(id)arg5 label2Font:(id)arg6 alignment:(long long)arg7 labelPairSpacing:(double)arg8 ;
-(MNBusinessLabelViewModel *)label1;
-(MNBusinessLabelViewModel *)label2;
-(double)labelSpacing;
-(id)initWithLabel1:(id)arg1 label2:(id)arg2 labelSpacing:(double)arg3 ;
@end
