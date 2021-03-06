/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString, NSURL;


@protocol FBMenuItem <NSObject>
@property (nonatomic,retain) NSNumber * badgeCount; 
@property (nonatomic,copy,readonly) NSString * bookmarkID; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * subtitleName; 
@property (nonatomic,copy,readonly) NSString * typeAttribute; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSURL * imageURL; 
@property (nonatomic,copy,readonly) NSString * highlightType; 
@required
-(NSString *)subtitleName;
-(NSString *)highlightType;
-(NSURL *)url;
-(NSString *)displayName;
-(NSString *)bookmarkID;
-(NSURL *)imageURL;
-(NSString *)typeAttribute;
-(void)setBadgeCount:(id)arg1;
-(NSNumber *)badgeCount;

@end

