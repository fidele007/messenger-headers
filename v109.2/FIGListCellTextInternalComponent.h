/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKComponent.h>

@class NSAttributedString, FIGFontMetric;

@interface FIGListCellTextInternalComponent : CKComponent {

	NSAttributedString* _title;
	NSAttributedString* _body;
	NSAttributedString* _meta;
	FIGFontMetric* _titleFontMetric;
	FIGFontMetric* _bodyFontMetric;
	FIGFontMetric* _metaFontMetric;
	id _identifier;
	BOOL _overrideFontStyles;
	BOOL _showSeeMoreIfTruncated;
	CKTypedComponentAction<NSURL *> _linkTapAction;
	unsigned long long _maxTitleLines;
	unsigned long long _maxBodyLines;
	unsigned long long _state;
	CKTypedComponentAction<> _didExpandAction;

}

@property (nonatomic,readonly) CKTypedComponentAction<> didExpandAction;              //@synthesize didExpandAction=_didExpandAction - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                              //@synthesize state=_state - In the implementation block
+(id)newWithTitle:(id)arg1 body:(id)arg2 meta:(id)arg3 identifier:(id)arg4 overrideFontStyles:(BOOL)arg5 showSeeMoreIfTruncated:(BOOL)arg6 linkTapAction:(const CKTypedComponentAction<NSURL *>*)arg7 options:(const FIGListCellTextInternalComponentOptions*)arg8 ;
+(id)initialState;
-(void)toggleExpandInline;
-(double)topCapHeightOffset;
-(double)bottomBaselineOffset;
-(void)tapAction:(id)arg1 context:(id)arg2 ;
-(CKTypedComponentAction<>)didExpandAction;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(unsigned long long)state;
@end

