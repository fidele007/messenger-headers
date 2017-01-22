/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnotationUnderlayNodeDelegate.h>
#import <Messenger/FBGestureRecognizingBlockController.h>

@protocol FBAnnotationUnderlayControllerDelegate;
@class FBUserSession, FBRichStoryBlockDisplayContext, FBAnnotationUnderlayNode, NSDictionary, FBGeoAnnotationController, NSString;

@interface FBAnnotationUnderlayController : NSObject <FBAnnotationUnderlayNodeDelegate, FBGestureRecognizingBlockController> {

	FBUserSession* _session;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBAnnotationUnderlayNode* _underlayNode;
	NSDictionary* _annotationContollers;
	id<FBAnnotationUnderlayControllerDelegate> _delegate;

}

@property (nonatomic,readonly) FBGeoAnnotationController * geoController; 
@property (nonatomic,copy,readonly) NSDictionary * annotationContollers;                              //@synthesize annotationContollers=_annotationContollers - In the implementation block
@property (assign,nonatomic,__weak) id<FBAnnotationUnderlayControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)containsUnderlayAnnotations:(id)arg1 ;
+(id)underlayControllerWithAnnotations:(id)arg1 session:(id)arg2 displayContext:(id)arg3 ;
-(NSDictionary *)annotationContollers;
-(id)initWithAnnotations:(id)arg1 session:(id)arg2 displayContext:(id)arg3 ;
-(FBGeoAnnotationController *)geoController;
-(void)annotationUnderlayNodeDidTapClose:(id)arg1 ;
-(BOOL)canRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(id)underlayNode;
-(void)setDelegate:(id<FBAnnotationUnderlayControllerDelegate>)arg1 ;
-(id<FBAnnotationUnderlayControllerDelegate>)delegate;
-(void)didShow;
-(void)didHide;
@end
