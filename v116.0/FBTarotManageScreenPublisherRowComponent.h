/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKCompositeComponent.h>

@class FBTarotPublisherEntity;

@interface FBTarotManageScreenPublisherRowComponent : CKCompositeComponent {

	FBTarotPublisherEntity* _entity;
	Maybe<const FB::Tarot::CardToolbox>* _toolbox;

}

@property (nonatomic,readonly) FBTarotPublisherEntity * entity;                           //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) Maybe<const FB::Tarot::CardToolbox>* toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithEntity:(id)arg1 toolbox:(CardToolbox*)arg2 ;
-(Maybe<const FB::Tarot::CardToolbox>*)toolbox;
-(void)_didTapOnSubscriptionToggle;
-(FBTarotPublisherEntity *)entity;
@end

