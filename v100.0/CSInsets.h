/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CSGeometryTypesCSInsetsExport.h>

@class NSNumber;

@interface CSInsets : NSObject <CSGeometryTypesCSInsetsExport> {

	NSNumber* _top;
	NSNumber* _left;
	NSNumber* _bottom;
	NSNumber* _right;

}

@property (nonatomic,readonly) NSNumber * top;                 //@synthesize top=_top - In the implementation block
@property (nonatomic,readonly) NSNumber * left;                //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) NSNumber * bottom;              //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,readonly) NSNumber * right;               //@synthesize right=_right - In the implementation block
+(id)newWithInsets:(UIEdgeInsets)arg1 ;
-(id)initWithInsets:(UIEdgeInsets)arg1 ;
-(NSNumber *)left;
-(NSNumber *)top;
-(NSNumber *)right;
-(NSNumber *)bottom;
@end

