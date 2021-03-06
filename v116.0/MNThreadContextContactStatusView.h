/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, MNThreadContextAddContactButton;

@interface MNThreadContextContactStatusView : UIView {

	BOOL _shouldShowAddContactButton;
	FBRichTextView* _contactStatusTextView;
	MNThreadContextAddContactButton* _addContactButton;

}

@property (nonatomic,readonly) MNThreadContextAddContactButton * addContactButton;              //@synthesize addContactButton=_addContactButton - In the implementation block
+(CGSize)sizeForThreadContextViewModel:(id)arg1 maxWidth:(double)arg2 ;
-(MNThreadContextAddContactButton *)addContactButton;
-(id)initWithUseConnectionsContent:(BOOL)arg1 ;
-(CGSize)_contactStatusStringSizeWithMaxWidth:(double)arg1 ;
-(void)setShouldShowAddContactButton:(BOOL)arg1 ;
-(void)setContactStatusString:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

