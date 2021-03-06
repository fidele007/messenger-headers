/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCompositeSectionComponent.h>

@class FBSectionComponent;

@interface FBChangesetTransformingSectionComponent : FBCompositeSectionComponent {

	/*^block*/id _changesetTransformingBlock;
	FBSectionComponent* _innerComponent;

}

@property (nonatomic,readonly) FBSectionComponent * innerComponent;              //@synthesize innerComponent=_innerComponent - In the implementation block
+(id)newWithComponent:(id)arg1 changesetTransformingBlock:(/*^block*/id)arg2 ;
+(id)newWithComponent:(id)arg1 ;
-(FBSectionComponent *)innerComponent;
-(id)changesetFromPreviousComponent:(id)arg1 ;
@end

